//TALIDTID, MARK A. | BSIT 1-2N | COMP003
#include<stdio.h>
#include<conio.h>

struct PassengerSeat{ //Structure for Passenger Seat Location
	    int SeatTaken; //0 is Available, 1 is Not Available
		int SeatNum;
	    char SeatIsle[2];
    };
    
int main(void){
	int ans; //Choice variable. Yes or No.
	printf("Code by Mark Talidtid | BSIT 1-2N\n\n");
	
	//Program Menu
	do{
		printf("#########################\n#   POKLAHEY AIRLINES   #\n#########################\n\n");
		printf("Welcome to Poklahey Airlines! Would you like to reserve a seat?\n (1)Yes | (0)No\n"); //Confirmation of reserving a seat.
		scanf("%d", &ans); 
		
		if(ans==0){ //Not reserving a seat.
	    	printf("\nThank you for visiting Poklahey Airlines!");
	    	return 0; //Closing the program.
	    }
	    
	    else if(ans!=1){ //Invalid input.
			printf("\nOption not valid. Please try again.\n------------------------\n");
		}
	}
	
	while(ans!=0 && ans!=1); //Making sure the user choose one of the given options.
    
    //Intializing the Seats
    if(ans==1){ //Reserving a seat.
        int r=5; //Rows
	    int c=4; //Columns
	    int i, j;
        struct PassengerSeat seat[r][c];
        char letter[5]="ABCD";
        
        for(i=0; i<r; i++){
	    	for(j=0; j<c; j++){
	    		seat[i][j].SeatNum=i+1; //For getting the seat number.
	    		seat[i][j].SeatIsle[0]=letter[j]; //For getting the seat letter.
	    		seat[i][j].SeatIsle[1]='\0'; //Null Terminator
	    		seat[i][j].SeatTaken=0; //Initial available seats.
            }
        }
        
    //Entire reservation process.
	    do{
	        //Displaying of the Seat Map
	        printf("\n");
	        printf("\tA\tB\tC\tD"); //Displaying the columns.
		    printf("\n\t----------------------------\n");
	        
		    for(i=0; i<r; i++){
		    	printf("%d", i+1); //Displaying the rows.
		    	for(j=0; j<c; j++){
		    		if(seat[i][j].SeatTaken){
		    			printf("\t[ X ]"); //Seat is taken.
					} else {
		    	        printf("\t[%d%s]", seat[i][j].SeatNum, seat[i][j].SeatIsle); //Displaying the seats.
		    	    }
				}
			printf("\n\n");
		    }
		    
		    //Reserving a Seat Position
		    int resNum;
		    char resAlp;
		    
		    do{ //For Row Number
		        printf("\nPlease choose a seat above.\n");
		        printf("Enter Row Number [1-5]: ");
		        scanf("%d", &resNum);
		        
		        if(resNum<1 || resNum>5){
		        	printf("\nInvalid row! Must be 1-5 only.\n");
				}
		    } while (resNum<1 || resNum>5);
		    
		    do{ //For Letter Seats
		        printf("Enter a Letter Seat [A-D]: ");
		        scanf(" %c", &resAlp);
		        
		        if(resAlp<'A' || resAlp>'D'){
		        	printf("\nInvalid seat letter! Must be A-D only.\n");
				}
		    } while (resAlp<'A' || resAlp>'D');
		    
		    //Confirming the seat reservation.
		    int rIdx=resNum - 1;
		    int cIdx=resAlp -'A';
		    int ReservedSeat;
		    int NumOfSeats=r*c;
		    
			if(seat[rIdx][cIdx].SeatTaken == 1){
				printf("\n\nSeat %d%c is already taken!\n", resNum, resAlp);
			} else {
				seat[rIdx][cIdx].SeatTaken = 1;	
				printf("\nSeat %d%c is successfully reserved!", resNum, resAlp);
				ReservedSeat++;
			}
			
			if(NumOfSeats == ReservedSeat){
				printf("\n\n###### ALL SEATS ARE NOW RESERVED ######");
				printf("\nThank you for flying with Poklahey Airlines! :D ");
				return 0;
			}
			
			//Continue seat reservation option.
			printf("\nWould you like to continue reservations? (1) Yes | (0) No\n");
			scanf(" %d", &ans);
			
	    } while(ans==1); //Confirming choice to continue
		
		printf("\n\nThank you for flying with Poklahey Airlines! :D "); 	
    }
    return 0;
}
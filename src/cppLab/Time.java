import java.util.Scanner;

class Time {
    float hrs;
    int min;
    int days;
    private final static Scanner sc = new Scanner(System.in);

    Time() {
        hrs = 0f;
        min = 0;
        days = 0;
    }
    
    Time add(Time t1, Time t2) {
        Time temp = new Time();
        temp.hrs = t1.hrs + t2.hrs;
        temp.min = t1.min + t2.min;
        return temp;
    }

    Time add(int x, Time t1) {
        Time temp = new Time();
        temp.hrs = t1.hrs + x;
        temp.min = t1.min;
        return temp;
    }

    void clacCorrectTime() {
        while ( this.min >= 60 ) {
            this.hrs += 1f;
            this.min -= 60;
        }
        while ( this.hrs >= 24 ) {
            this.hrs -= 24f;
            this.days++;
        }
    }

    void readTime() {
        System.out.println("\n=========ENTER THE HRS AND AND MIN=========");
        System.out.print("Enter the hrs : ");
        this.hrs = sc.nextFloat();
        System.out.print("Enter the min : ");
        this.min = sc.nextInt();
    }

    void displayTime() {
        System.out.println("\nThe Time is : ");
        System.out.println("Hrs is : "+ this.hrs +" hrs");
        System.out.println("Min is : "+ this.min +" min");
        System.out.println("Total Days is : "+ this.days+" days");
        System.out.println();
    }
    public static void main(String[] args) {

        Time t1 = new Time();
        Time t2 = new Time();

        t1.readTime();
        t2.readTime();

        Time ansOfAdd1 = new Time();
        ansOfAdd1 = ansOfAdd1.add(t1, t2);
        System.out.println("ADDITION WITHOUT CORRECTION OF THE TIME IS : ");
        ansOfAdd1.displayTime();
        Time ansOfAdd2 = new Time();
        System.out.println("ADDITION WITHOUT CORRECTION OF THE TIME IS : ");
        ansOfAdd2.displayTime();

        ansOfAdd1 = ansOfAdd1.add(t1, t2);
        System.out.println("CORRECTED TIME IS");
        ansOfAdd1.clacCorrectTime();
        ansOfAdd1.displayTime();

        ansOfAdd2 = ansOfAdd2.add(50,t1);
        System.out.println("CORRECTED TIME IS");
        ansOfAdd2.clacCorrectTime();
        ansOfAdd2.displayTime();

        t1.clacCorrectTime();
        t2.clacCorrectTime();

        t1.displayTime();
        t2.displayTime();

    }
}
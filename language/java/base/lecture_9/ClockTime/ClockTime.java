import java.util.Random;
class TimeHMS {
    private int hour, min, sec;
    public TimeHMS(int hour, int min, int sec) {
        setH(hour);
        setM(min);
        setS(sec);
    }
    public TimeHMS(int min, int sec) {
        this(0, min, sec);
    }
    public TimeHMS(int sec) {
        this(0, 0, sec);
    }
    public TimeHMS() {
        this(0, 0, 0);
    }
    private void setH(int hour) {
        if (hour >= 0 && hour < 24) {
            this.hour = hour;
        } else {
            hour = 0;
        }
    }
    private void setM(int min) {
        if (min >= 0 && min < 60) {
            this.min = min;
        } else {
            min = 0;
        }
    }
    private void setS(int sec) {
        if (sec >= 0 && sec < 60) {
            this.sec = sec;
        } else {
            sec = 0;
        }
    }
    public String toString() {
        String str = hour + ":" + min + ":" + sec;
        return str;
    }
}
public class ClockTime {
    public static void main(String[] args) {
        TimeHMS t1 = new TimeHMS(12, 10, 30);
        TimeHMS t2 = new TimeHMS(10, 30);
        TimeHMS t3 = new TimeHMS(30);
        TimeHMS t4 = new TimeHMS();
        System.out.println("Time 1 : " + t1);
        System.out.println("Time 2 : " + t2);
        System.out.println("Time 3 : " + t3);
        System.out.println("Time 4 : " + t4);
    }
}
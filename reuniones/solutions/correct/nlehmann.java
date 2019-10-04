import java.io.*;
import java.util.*;

class reuniones {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(in.readLine());

        ArrayList<Event> events = new ArrayList<Event>();
        for (int i = 0; i < N; ++i) {
            st = new StringTokenizer(in.readLine());
            int p = Integer.parseInt(st.nextToken());
            int q = Integer.parseInt(st.nextToken());
            events.add(new Event(p, 1));
            events.add(new Event(q, 0));
        }

        Collections.sort(events);

        int max = 0;
        int count = 0;
        for (Event event : events) {
            if (event.type == 1) {
                count += 1;
            } else {
                count -= 1;
            }
            max = Math.max(max, count);
        }

        System.out.println(max);
    }
}

class Event implements Comparable<Event> {
    int time;
    int type;

    Event(int time, int type) {
        this.time = time;
        this.type = type;
    }

    public int compareTo(Event rhs) {
        if (time == rhs.time)
            return type - rhs.type;
        return time - rhs.time;
    }
}

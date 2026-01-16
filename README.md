# temperature-humidity-moniter
<h1>🌟Key Features</h1>
<pre>
1. Real-Time Monitoring: The system provides constant, accurate readings of the 
surrounding environment. 
2. High-Temperature Alert: A critical feature is the alert mechanism set at a 
predefined threshold of 35°C. When the temperature exceeds this limit, the 
Arduino activates a buzzer (audible warning) and a rapidly blinking LED (visual 
alert). This dual system ensures the warning is noticed under various conditions, 
enhancing safety. 
3. Temperature Trend Indicator: This intelligent feature compares current 
readings with previous values to determine if the temperature is rising, falling, or 
stable. This provides insight into environmental changes and helps users 
anticipate potential overheating before it becomes critical. 
4. Non-Blocking Operation: The system uses the millis() function for non-blocking 
timing techniques, enabling multiple tasks (sensor reading, LCD updating, alerts) 
to operate simultaneously without interruption. This ensures the system remains 
highly responsive and reliable during continuous operation.
</pre>
<br>
<hr>
<h1>🌟Disadvantages</h1>
<pre>
• Designed for Basic Monitoring Applications 
The system is intended for basic temperature and humidity monitoring and is best suited 
for educational and demonstration purposes. 
• Sensor Selection Optimized for Simplicity 
The DHT11 sensor is chosen for its simplicity and ease of interfacing, making it ideal 
for learning and introductory projects. 
• Limited Environmental Range 
The system operates effectively within normal room temperature and humidity ranges. 
• External Power Dependency 
The system requires a USB power source, such as a laptop, for operation. 
• Alert Based on Temperature Only 
The alert mechanism is configured to trigger based on temperature threshold, while 
humidity is monitored for display purposes. 
• Manual Data Observation 
The system displays real-time data but does not include data storage or remote 
monitoring features.
</pre>
<br>
<hr>
<h1>🌟CIRCUIT DIAGRAM</h1>
<img width="826" height="407" alt="Screenshot 2026-01-16 235015" src="https://github.com/user-attachments/assets/e2a72983-df8e-4cc4-b387-0191cf01d7bd" />
<img width="580" height="786" alt="Screenshot 2026-01-16 235035" src="https://github.com/user-attachments/assets/3b568fd7-afbe-4e9e-967b-bbba344888ce" />
<BR>
<HR>
<h1>🌟Applications</h1>
<pre>
• Home and Room Monitoring 
Used to monitor temperature and humidity in homes to maintain comfortable living 
conditions. 
• Laboratories and Classrooms 
Helps in monitoring environmental conditions in laboratories and classrooms to ensure 
safe operation of equipment. 
• Server Rooms and Computer Labs 
Can be used to detect overheating in server rooms and computer laboratories and 
provide early warning. 
• Greenhouses and Indoor Plants 
Useful for monitoring temperature and humidity levels required for plant growth. 
• Educational and Training Purposes 
Widely used in engineering and diploma courses to demonstrate sensor interfacing and 
embedded system concepts. 
• Basic Safety Monitoring Systems 
Can be used as a simple safety alert system for detecting abnormal temperature rise.
</pre>


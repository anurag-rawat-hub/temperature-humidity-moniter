# temperature-humidity-moniter
<h6>🌟Key Features</h6>
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

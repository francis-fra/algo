/*
 * This Java source file was generated by the Gradle 'init' task.
 */
package com.fra.jalgo.ch03;

// import org.junit.Test;
import org.junit.*;
import static org.junit.Assert.*;

public class AppTest {

    // @Before 
    // public void setup() {

    // }

    @Test public void testAppHasAGreeting() {
        App classUnderTest = new App();
        assertNotNull("app should have a greeting", classUnderTest.getGreeting());
    }
}

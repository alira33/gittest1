 .arch msp430g2553
 
 
LED_RED:
        .space  1
        .global LED_GREEN
        .size   LED_GREEN, 1
LED_GREEN:
        .space  1
        .global LEDS
        .size   LEDS, 1
LEDS:
        .space  1
        .global P1DIR
        .size   P1DIR, 1
P1DIR:
        .space  1
        .global P1OUT
        .size   P1OUT, 1
P1OUT:
        .space  1
        .global switch_state_changed
        .size   switch_state_changed, 1
switch_state_changed:
        .space  1
        .global switch_state_down
        .size   switch_state_down, 1
        
switch_state_down:
        .space  1
        .text
        .align  2
        .global led_update()
        
        
        led_update():
        
        cmp     r3, #1
        mov     r3, #0
        cmp     r3, #0
        mov     r3, r3
        mov     r3, r3, 
        mov     r3, r3, 
        and     r3, r3, 
        or     r3, r2, 
        and     r2, r3, 
        mov     r2, #0
        

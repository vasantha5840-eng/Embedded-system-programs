
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Motor 1: PB0, PB1, PB2
    DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2);

    // Motor 2: PC0, PC1, PC2
    DDRC |= (1 << PC0) | (1 << PC1) | (1 << PC2);

    while (1)
    {
        // MOTOR 1 FORWARD
        PORTB |= (1 << PB2);    // Enable
        PORTB |= (1 << PB0);
        PORTB &= ~(1 << PB1);

        // MOTOR 2 FORWARD
        PORTC |= (1 << PC2);    // Enable
        PORTC |= (1 << PC0);
        PORTC &= ~(1 << PC1);

        _delay_ms(3000);

        // BOTH MOTORS STOP
        PORTB &= ~((1 << PB0) | (1 << PB1));
        PORTC &= ~((1 << PC0) | (1 << PC1));

        _delay_ms(1000);

        // MOTOR 1 REVERSE
        PORTB |= (1 << PB1);
        PORTB &= ~(1 << PB0);

        // MOTOR 2 REVERSE
        PORTC |= (1 << PC1);
        PORTC &= ~(1 << PC0);

        _delay_ms(3000);

        // BOTH MOTORS STOP
        PORTB &= ~((1 << PB0) | (1 << PB1));
        PORTC &= ~((1 << PC0) | (1 << PC1));

        _delay_ms(1000);
    }

    return 0;
}

tests = [ {'description': 'First test. Testing example 1',
    'steps': [ {'inputs': [('PINA',0x03), ('PINB', 0xFF), ('PINC', 0x00)], 'iterations': 5 } ],
    'expected': [('PORTD',0x41)],
    },
    {'description': 'Second test. Testing example 2',
    'steps': [ {'inputs': [('PINA',0x02), ('PINB', 0x01), ('PINC', 0x03)], 'iterations': 5 } ],
    'expected': [('PORTD',0x00)],
    },
    {'description': 'Third test. Testing example 3',
    'steps': [ {'inputs': [('PINA',0xFF), ('PINB', 0xFF), ('PINC', 0xFF)], 'iterations': 5 } ],
    'expected': [('PORTD',0xBD)],
    },
    ]
#watch = ['PORTB']

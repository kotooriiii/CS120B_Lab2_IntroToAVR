tests = [ {'description': 'PINA: 0x03 => PORTC: 0x02',
    'steps': [ {'inputs': [('PINA',0x03)], 'iterations': 5 } ],
    'expected': [('PORTC',0x02)],
    },
    {'description': 'PINA: 0x02 => PORTC: 0x03',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 5 } ],
    'expected': [('PORTC',0x03)],
    },
    {'description': 'PINA: 0x1F => PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0x1F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x00)],
    },
    ]
#watch = ['PORTB']

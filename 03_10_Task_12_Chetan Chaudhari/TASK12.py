


pip install py-enigma

from enigma.machine import EnigmaMachine

for i in range(1,20):
  for j in range(1,20):
    machine = EnigmaMachine.from_key_sheet(
          rotors='I II III',
          reflector='B',
          ring_settings=[1, 17, 15],
          plugboard_settings='AV BS CG DL FU HZ IN KM OW RX')


machine.set_display('WXC')
msg_key = machine.process_text('KCH')


machine.set_display(msg_key)
ciphertext = 'DPIWPOLLFEUPIKAKLQLC'
plaintext = machine.process_text(ciphertext)
print(plaintext)


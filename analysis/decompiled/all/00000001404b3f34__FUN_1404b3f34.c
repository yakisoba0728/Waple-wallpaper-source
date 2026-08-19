// Function: FUN_1404b3f34
// Addr: 1404b3f34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3f34(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RDI;
  
  *param_1 = *param_1 | (byte)((ulonglong)param_2 >> 8);
  bVar4 = in_AL * '\x02';
  *unaff_RDI = bVar4;
  bVar2 = *(byte *)CONCAT71(in_register_00000001,bVar4);
  bVar3 = *(char *)CONCAT71(in_register_00000001,bVar4) + in_AL * -2;
  *(byte *)CONCAT71(in_register_00000001,bVar4) = bVar3 - CARRY1(in_AL,in_AL);
  if (param_1 + -1 == (byte *)0x0 || *(char *)CONCAT71(in_register_00000001,bVar4) == '\0') {
    *(byte *)CONCAT71(in_register_00000001,bVar4) =
         (*(char *)CONCAT71(in_register_00000001,bVar4) + in_AL * -2) -
         (bVar2 < bVar4 || bVar3 < CARRY1(in_AL,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar4) + 0x1c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)(param_1 + -1) >> 8);
  *(byte *)CONCAT71(in_register_00000001,bVar4) =
       *(char *)CONCAT71(in_register_00000001,bVar4) + bVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


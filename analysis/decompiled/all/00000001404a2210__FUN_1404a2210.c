// Function: FUN_1404a2210
// Addr: 1404a2210
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2210(longlong param_1,undefined4 param_2)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar2;
  byte bVar3;
  int *unaff_RBX;
  byte *unaff_RSI;
  uint unaff_EDI;
  
  bVar3 = (byte)param_2;
  *(undefined1 *)
   (CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) = 8;
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_AL != '\0') {
    *pcVar2 = *pcVar2 + in_AH;
    *unaff_RSI = *unaff_RSI + in_AL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar1 = in_AL + in_AH;
  *(undefined4 *)
   (CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) +
   CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1))) = 0x4c80b;
  *unaff_RSI = *unaff_RSI & bVar1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + in_AH;
  *unaff_RBX = *unaff_RBX +
               CONCAT22((short)((uint)param_2 >> 0x10),
                        CONCAT11((char)((uint)param_2 >> 8) + in_AL,bVar3));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + bVar3;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ bVar3;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) & unaff_EDI;
  cRam00000001604a3289 = cRam00000001604a3289 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


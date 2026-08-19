// Function: FUN_1404cc210
// Addr: 1404cc210
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc210(void)

{
  uint *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  byte in_AL;
  char cVar6;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar5 = (int)unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  puVar2 = (undefined1 *)
           (CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21 +
           CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *puVar2 = *puVar2;
  bVar4 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar6 = in_AL + 0x34 +
          (CARRY4(uVar5,*puVar1) || CARRY4(uVar5 + *puVar1,(uint)CARRY1(bVar4,in_AL)));
  pcVar3 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar6)) + 0x2e21004c +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar6)) * 8);
  *pcVar3 = *pcVar3 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


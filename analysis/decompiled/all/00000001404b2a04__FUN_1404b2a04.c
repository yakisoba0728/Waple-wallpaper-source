// Function: FUN_1404b2a04
// Addr: 1404b2a04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2a46) overlaps instruction at (ram,0x0001404b2a45)
    */

void FUN_1404b2a04(char *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  char cVar3;
  char in_AH;
  char cVar4;
  undefined6 in_register_00000002;
  char unaff_BH;
  uint unaff_EBP;
  char *unaff_RDI;
  bool bVar5;
  
  *(char *)(param_2 + 0x17) = *(char *)(param_2 + 0x17) >> 1;
  cVar4 = in_AH + unaff_BH;
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    *param_1 = *param_1 + in_AL + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001304b385d = LocalDescriptorTableRegister();
  if ((SCARRY1(in_AH,unaff_BH) == cVar4 < '\0') &&
     (cVar3 = *unaff_RDI, *unaff_RDI = *unaff_RDI + in_AL, SCARRY1(cVar3,in_AL) != *unaff_RDI < '\0'
     )) {
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) + 0x29);
    *pcVar1 = *pcVar1 + in_AL;
    *param_4 = *param_4;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) + in_AL;
    cVar3 = (char)((ulonglong)param_2 >> 8);
    bVar5 = SCARRY1(in_AL,cVar3);
    in_AL = in_AL + cVar3;
    if (bVar5 != (char)in_AL < '\0') {
      halt_baddata();
    }
    cVar3 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + in_AL;
    if (SCARRY1(cVar3,in_AL) == *unaff_RDI < '\0') {
      halt_baddata();
    }
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) + 0x29);
    *pcVar1 = *pcVar1 + in_AL;
  }
  bVar2 = *param_4;
  *param_4 = *param_4 + in_AL;
  cVar3 = in_AL + *(char *)(CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL)) +
                           CONCAT62(in_register_00000002,CONCAT11(cVar4,in_AL))) +
          CARRY1(bVar2,in_AL);
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(cVar4,cVar3)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(cVar4,cVar3)) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


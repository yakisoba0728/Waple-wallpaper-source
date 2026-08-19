// Function: FUN_1404b29f4
// Addr: 1404b29f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2a46) overlaps instruction at (ram,0x0001404b2a45)
    */

void FUN_1404b29f4(char *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  char cVar4;
  char in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  char *unaff_RDI;
  bool in_PF;
  bool bVar6;
  
  if (!in_PF) {
    *param_1 = *param_1 + unaff_BL;
    if ((POPCOUNT(*param_1) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar3 = in_AL + unaff_BL;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (char)param_1;
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3));
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))
                          ) + bVar3;
    *(char *)(param_2 + 0x17) = *(char *)(param_2 + 0x17) >> 1;
    cVar5 = in_AH + unaff_BH;
    if ((POPCOUNT(cVar5) & 1U) == 0) {
      uRam00000001304b385d = LocalDescriptorTableRegister();
      if ((SCARRY1(in_AH,unaff_BH) == cVar5 < '\0') &&
         (cVar4 = *unaff_RDI, *unaff_RDI = *unaff_RDI + bVar3,
         SCARRY1(cVar4,bVar3) != *unaff_RDI < '\0')) {
        pcVar1 = (char *)(CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) + 0x29);
        *pcVar1 = *pcVar1 + bVar3;
        *param_4 = *param_4;
        *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3)))
             = *(char *)CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) + bVar3;
        cVar4 = (char)((ulonglong)param_2 >> 8);
        bVar6 = SCARRY1(bVar3,cVar4);
        bVar3 = bVar3 + cVar4;
        if (bVar6 != (char)bVar3 < '\0') {
          halt_baddata();
        }
        cVar4 = *unaff_RDI;
        *unaff_RDI = *unaff_RDI + bVar3;
        if (SCARRY1(cVar4,bVar3) == *unaff_RDI < '\0') {
          halt_baddata();
        }
        pcVar1 = (char *)(CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) + 0x29);
        *pcVar1 = *pcVar1 + bVar3;
      }
      bVar2 = *param_4;
      *param_4 = *param_4 + bVar3;
      cVar4 = bVar3 + *(char *)(CONCAT44(in_register_00000004,
                                         CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3))) +
                               CONCAT44(in_register_00000004,
                                        CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar3)))) +
              CARRY1(bVar2,bVar3);
      *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) =
           *(uint *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,cVar4))) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_AL = bVar3 + cVar5;
  }
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


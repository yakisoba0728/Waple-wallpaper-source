// Function: FUN_1404cb75c
// Addr: 1404cb75c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb75c(byte *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  char in_AL;
  char cVar6;
  byte bVar7;
  char in_AH;
  char cVar8;
  undefined6 in_register_00000002;
  char cVar9;
  byte bVar10;
  char unaff_BL;
  byte bVar11;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  byte in_CF;
  uint uVar5;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  puVar2 = (uint *)(unaff_RBP +
                   CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
  uVar4 = *puVar2;
  uVar5 = *puVar2;
  *puVar2 = (uVar5 - unaff_ESI) - (uint)in_CF;
  cVar8 = in_AH + *(char *)(CONCAT44(unaff_00000034,unaff_ESI) +
                           CONCAT44(unaff_0000001c,
                                    CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))) +
          (uVar4 < unaff_ESI || uVar5 - unaff_ESI < (uint)in_CF);
  param_2 = param_2 | *(uint *)(unaff_RDI +
                               CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
  bVar10 = (byte)param_2;
  bVar11 = unaff_BL + unaff_BH * '\x02';
  cVar6 = in_AL + bVar10 + -100;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                   CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar1 = *pcVar1 + cVar9;
  *param_1 = *param_1 + cVar8;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar8,cVar6)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar8,cVar6)) + cVar6;
  bVar7 = cVar6 + bVar10 + 0x68;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                   CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar1 = *pcVar1 + cVar9;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar11;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)) +
                   CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)));
  *pcVar1 = (*pcVar1 - bVar7) - CARRY1(bVar3,bVar11);
  puVar2 = (uint *)((ulonglong)param_2 + 0x6003e005);
  *puVar2 = *puVar2 | unaff_ESI;
  bVar7 = bVar7 & bVar10;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)) + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7)) + bVar7;
  *(uint *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7))) =
       *(uint *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(cVar8,bVar7))) &
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,bVar11));
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


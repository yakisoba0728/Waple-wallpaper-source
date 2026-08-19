// Function: FUN_1404d5f60
// Addr: 1404d5f60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5f60(char *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar6;
  char *in_RAX;
  undefined7 uVar7;
  char cVar8;
  char cVar10;
  uint *puVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  char in_CF;
  bool in_ZF;
  undefined8 unaff_retaddr;
  longlong lStackX_8;
  char *pcVar5;
  
  cVar8 = (char)((ulonglong)param_1 >> 8);
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)in_RAX;
  if (!in_ZF) {
    pbVar1 = (byte *)(param_1 + 0x54);
    bVar2 = *pbVar1;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *pbVar1 = *pbVar1 + bVar6;
    *in_RAX = *in_RAX + cVar4 + CARRY1(bVar2,bVar6);
    *(uint *)(param_2 + 0x6003e005) = *(uint *)(param_2 + 0x6003e005) | unaff_ESI;
    puVar9 = (uint *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11(cVar10 + *in_RAX,(char)param_2));
    *puVar9 = *puVar9 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001004d65b5 = cRam00000001004d65b5 + cVar4;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = cVar4 + ((cVar10 - in_RAX[(longlong)param_1]) - in_CF);
  pcVar5 = (char *)CONCAT71(uVar7,cVar4);
  *pcVar5 = *pcVar5 + cVar8;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar4;
  *pcVar5 = *pcVar5 + cVar4;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)CONCAT71(uVar7,cVar4 * '\x02' + (char)((ulonglong)unaff_retaddr >> 8));
  *pcVar5 = *pcVar5 + cVar8;
  *param_1 = *param_1 + param_3;
  pbVar1 = (byte *)(lStackX_8 + -0x2c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)lStackX_8;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       unaff_BH;
  param_1[(ulonglong)
          ((((uint)pcVar5 | 0x15e45d00) + 0xe38bb900) - (uint)CARRY1(bVar2,(byte)lStackX_8)) ^ 0x1b]
       = param_1[(ulonglong)
                 ((((uint)pcVar5 | 0x15e45d00) + 0xe38bb900) - (uint)CARRY1(bVar2,(byte)lStackX_8))
                 ^ 0x1b] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404b4dfc
// Addr: 1404b4dfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4dfc(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar9;
  byte bVar11;
  char *pcVar10;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RDI;
  byte *pbVar8;
  byte bVar12;
  
  param_1[param_2] = param_1[param_2] + (char)(in_EAX >> 8);
  uVar5 = in_EAX & 0x25a0001a;
  cVar2 = (char)uVar5 - *(char *)(ulonglong)uVar5;
  pbVar8 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   (longlong)param_1 * 2);
  *pbVar8 = *pbVar8 | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + cVar2;
  uVar6 = uRam00000001478d5913;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar2) | uRam00000001478d5913;
  puVar7 = (uint *)(ulonglong)uVar5;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || uVar5 == 0) {
    *(undefined1 *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(undefined1 *)
          CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    param_2 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                       CONCAT11((char)((ulonglong)param_2 >> 8) + (byte)*puVar7,(char)param_2));
  }
  bVar4 = (byte)uVar5;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  *puVar7 = *puVar7 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)puVar7 = (byte)*puVar7 | bVar4;
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar12 = bVar11 | param_1[CONCAT44(unaff_0000001c,
                                     CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))];
  pcVar10 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar12,(char)param_2));
  uVar6 = CONCAT31((int3)(CONCAT22((short)(uVar5 >> 0x10),
                                   CONCAT11((char)(uVar6 >> 8) - bVar11,bVar4)) >> 8),bVar4) +
          0xd0000a64;
  pbVar8 = (byte *)(ulonglong)uVar6;
  *pcVar10 = *pcVar10 - unaff_BL;
  pcVar9 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + bVar12,(char)param_1));
  *pcVar10 = *pcVar10 - unaff_BL;
  pcVar1 = (char *)((longlong)pcVar9 * 2 + 0x21004b);
  *pcVar1 = *pcVar1 + unaff_BH;
  *pbVar8 = *pbVar8 + (char)uVar6;
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 >> 1;
  iVar3 = CONCAT31((int3)(uVar6 >> 8),((char)uVar6 - *pbVar8) - (bVar4 & 1));
  *pcVar10 = *pcVar10 - unaff_BL;
  pcVar1 = (char *)((longlong)pcVar9 * 2 + 0x701004b);
  *pcVar1 = *pcVar1 + unaff_BH;
  uVar6 = iVar3 + 0x5e00700;
  if (!SCARRY4(iVar3,0x5e00700)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 ^ (byte)uVar6;
  *pcVar9 = *pcVar9 + (byte)uVar6;
  syscall();
  *unaff_RDI = *unaff_RDI + '_';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


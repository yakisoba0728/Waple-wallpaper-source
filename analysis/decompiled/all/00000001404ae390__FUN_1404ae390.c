// Function: FUN_1404ae390
// Addr: 1404ae390
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae390(longlong param_1,char *param_2)

{
  byte bVar1;
  uint3 uVar2;
  char cVar3;
  char cVar7;
  int in_EAX;
  uint uVar4;
  ulonglong uVar6;
  longlong lVar8;
  char *pcVar9;
  char cVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  char *pcVar5;
  
  uVar4 = in_EAX + 0x58001329 + (uint)in_CF;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar3 = (char)uVar4;
  cVar7 = (char)(uVar4 >> 8);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  if (param_1 == 1) {
    cRam0000000000000000 = cRam0000000000000000 + cVar7;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar5[0x28] = pcVar5[0x28] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar8 = param_1 + -2;
  uVar2 = (uint3)(uVar4 >> 8);
  if (lVar8 == 0) {
    cRam0000000000000000 = cRam0000000000000000 + cVar7;
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar3;
    *pcVar5 = *pcVar5 + cVar3;
    cVar3 = in(0xc);
    pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
    *pcVar5 = *pcVar5 + cVar3;
    uVar2 = uVar2 | (uint3)((uint)*(undefined4 *)(pcVar5 + in_FS_OFFSET) >> 8);
    *param_2 = *param_2 + cVar10;
    bVar1 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *unaff_RDI = *unaff_RDI;
    param_2 = (char *)(ulonglong)
                      ((uint)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ bVar1) ^
                      *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    pcVar5 = (char *)((ulonglong)uVar2 << 8);
    pcVar9 = (char *)(param_1 + -3);
    if (pcVar9 == (char *)0x0) {
      cRam0000000000000000 = cRam0000000000000000 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    cVar3 = (char)lVar8 + cVar10;
    pcVar9 = (char *)CONCAT71((int7)((ulonglong)lVar8 >> 8),cVar3);
    uVar6 = (ulonglong)(uVar4 ^ 0x13) ^ 0x13;
    unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4a] =
         unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4a] + unaff_BH;
    *pcVar9 = *pcVar9 + cVar7;
    pcVar5 = (char *)(uVar6 * 2);
    *pcVar5 = *pcVar5 + cVar3;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar7 + cVar10 + (byte)param_2,(char)uVar6)) +
            0x6c40000;
    pcVar5 = (char *)(ulonglong)uVar4;
    *pcVar5 = *pcVar5 + (char)uVar4;
  }
  pcVar9[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       pcVar9[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + (char)param_2;
  cVar3 = (char)((ulonglong)param_2 >> 8);
  param_2[(longlong)pcVar9] = param_2[(longlong)pcVar9] + cVar3;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),(char)pcVar9 + cVar3);
  unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4a] =
       unaff_RDI[CONCAT44(unaff_00000034,unaff_ESI) * 2 + 0x4a] + unaff_BH;
  *pcVar9 = *pcVar9 + (char)((ulonglong)pcVar5 >> 8);
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


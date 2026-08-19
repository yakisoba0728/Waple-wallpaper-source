// Function: FUN_1404ae3c4
// Addr: 1404ae3c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae3c4(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  uint3 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  char *pcVar5;
  char cVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char cVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  iVar4 = in_EAX + -0x1ffff5cc;
  bVar1 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
  uVar10 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 ^ bVar1) ^
           *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar9 = (char *)(ulonglong)uVar10;
  uVar2 = (uint3)((uint)iVar4 >> 8);
  cVar3 = (char)iVar4 + unaff_BL;
  lVar7 = param_1 + -1;
  cVar6 = (char)((uint)iVar4 >> 8);
  if (lVar7 == 0) {
    cRam0000000000000000 = cRam0000000000000000 + cVar6;
    *(char *)(ulonglong)CONCAT31(uVar2,cVar3) = *(char *)(ulonglong)CONCAT31(uVar2,cVar3) + cVar3;
    bVar1 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *unaff_RDI = *unaff_RDI;
    uVar10 = CONCAT31((int3)(uVar10 >> 8),(byte)uVar10 ^ bVar1) ^
             *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar9 = (char *)(ulonglong)uVar10;
    cVar3 = cVar3 + cVar6 + unaff_BL;
    pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
    pcVar8 = (char *)(param_1 + -2);
    if (pcVar8 == (char *)0x0) {
      cRam0000000000000000 = cRam0000000000000000 + cVar6;
      *unaff_RSI = *unaff_RSI + cVar3;
      *pcVar5 = *pcVar5 + cVar3;
      cVar3 = in(0xc);
      pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
      *pcVar5 = *pcVar5 + cVar3;
      uVar2 = uVar2 | (uint3)((uint)*(undefined4 *)(pcVar5 + in_FS_OFFSET) >> 8);
      *pcVar9 = *pcVar9 + (char)(uVar10 >> 8);
      bVar1 = *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      *unaff_RDI = *unaff_RDI;
      pcVar9 = (char *)(ulonglong)
                       (CONCAT31((int3)(uVar10 >> 8),(byte)uVar10 ^ bVar1) ^
                       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
      pcVar5 = (char *)((ulonglong)uVar2 << 8);
      pcVar8 = (char *)(param_1 + -3);
      if (pcVar8 == (char *)0x0) {
        cRam0000000000000000 = cRam0000000000000000 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404ae449;
    }
  }
  else {
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)lVar7 >> 8),(char)lVar7 + (char)(uVar10 >> 8));
    pcVar5 = (char *)((ulonglong)(CONCAT31(uVar2,cVar3) ^ 0x13) ^ 0x13);
    unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] = unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] + unaff_BH
    ;
    *pcVar8 = *pcVar8 + cVar6;
    *pcVar5 = *pcVar5 + (char)pcVar5;
    pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,(char)pcVar5 + (byte)uVar10);
  }
  cVar11 = (char)((ulonglong)pcVar9 >> 8);
  cVar6 = (char)pcVar8 + cVar11;
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),cVar6);
  unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] = unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] + unaff_BH;
  cVar3 = (char)((ulonglong)pcVar5 >> 8);
  *pcVar8 = *pcVar8 + cVar3;
  *(char *)((longlong)pcVar5 * 2) = *(char *)((longlong)pcVar5 * 2) + cVar6;
  uVar10 = (int)CONCAT62((int6)((ulonglong)pcVar5 >> 0x10),
                         CONCAT11(cVar3 + cVar11 + (char)pcVar9,(char)pcVar5)) + 0x6c40000;
  pcVar5 = (char *)(ulonglong)uVar10;
  *pcVar5 = *pcVar5 + (char)uVar10;
code_r0x0001404ae449:
  pcVar8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       pcVar8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + (char)pcVar9;
  cVar3 = (char)((ulonglong)pcVar9 >> 8);
  pcVar9[(longlong)pcVar8] = pcVar9[(longlong)pcVar8] + cVar3;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),(char)pcVar8 + cVar3);
  unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] = unaff_RDI[(longlong)unaff_RSI * 2 + 0x4a] + unaff_BH;
  *pcVar9 = *pcVar9 + (char)((ulonglong)pcVar5 >> 8);
  (&stack0x00000000)[(longlong)unaff_RSI * 8] =
       (&stack0x00000000)[(longlong)unaff_RSI * 8] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404d0a60
// Addr: 1404d0a60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0ae1) overlaps instruction at (ram,0x0001404d0ae0)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d0ac9) */
/* WARNING: Removing unreachable block (ram,0x0001404d0ae1) */
/* WARNING: Removing unreachable block (ram,0x0001404d0adb) */

void FUN_1404d0a60(byte *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char cVar6;
  undefined8 in_RAX;
  char *pcVar5;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined6 uVar11;
  char unaff_BL;
  char cVar12;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  uint unaff_EDI;
  char unaff_R15B;
  uint uVar4;
  byte bVar7;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)param_2;
  cVar8 = (char)param_1;
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '=' + (char)*param_2);
  uVar3 = uVar4 + 9;
  *param_2 = (*param_2 - (uint)param_1) - (uint)(0xfffffff6 < uVar4);
  bVar10 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)unaff_RSI + (ulonglong)uVar3);
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) + cVar8;
  bVar10 = (byte)uVar3 ^ (byte)*unaff_RSI;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10) + 0x68004d09);
  *pcVar1 = *pcVar1 + '+';
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  param_1[0x2004d09] = param_1[0x2004d09] + unaff_R15B;
  bVar7 = (byte)(uVar3 >> 8);
  cVar6 = bVar7 + *param_1;
  iVar2 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar6,bVar10));
  *unaff_RSI = *unaff_RSI + iVar2 + (uint)CARRY1(bVar7,*param_1);
  *param_1 = *param_1 + cVar9;
  if (*param_1 == 0) {
    pcVar5 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),bVar10 + cVar9);
    cVar12 = unaff_BL + unaff_BH;
    uVar3 = unaff_EDI & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) &
            *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12));
    pcVar1 = (char *)((ulonglong)uVar3 + 0x4a + CONCAT62(uVar11,CONCAT11(0x2b,cVar9)) * 4);
    *pcVar1 = *pcVar1 + cVar8;
    *param_1 = *param_1 + cVar6;
    *pcVar5 = *pcVar5 + bVar10 + cVar9;
    pcVar1 = (char *)((ulonglong)
                      (uVar3 & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) &
                      *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12 + unaff_BH))) + 0x4a
                     + CONCAT62(uVar11,CONCAT11(0x2b,cVar9)) * 4);
    *pcVar1 = *pcVar1 + cVar8;
    *param_1 = *param_1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar11,CONCAT11(0x2b,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(0x2b,cVar9)) + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


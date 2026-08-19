// Function: FUN_1404ac234
// Addr: 1404ac234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ac28e) overlaps instruction at (ram,0x0001404ac28a)
    */

void FUN_1404ac234(byte *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar8;
  byte *in_RAX;
  undefined7 uVar9;
  byte *pbVar7;
  char cVar10;
  byte bVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  int *unaff_RDI;
  undefined1 auStack_119 [257];
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  cVar10 = (char)param_2;
  uStack_8 = 0x620006e8;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x38);
  *pcVar1 = *pcVar1 + cVar10;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX | *in_RAX;
  bVar11 = (byte)unaff_EBX ^ *(byte *)(CONCAT71(uVar9,bVar2) + -0x77d6fff5);
  iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar11);
  uVar6 = (uint)CONCAT71(uVar9,bVar2) & 0xffffff78;
  uVar4 = uVar6 | 0xe681f00;
  *param_2 = *param_2 + (char)param_1;
  *unaff_RDI = *unaff_RDI + iVar5;
  bVar2 = *param_1;
  bVar3 = (byte)uVar6;
  *param_1 = *param_1 + bVar3;
  if (CARRY1(bVar2,bVar3) || *param_1 == 0) {
    *(char *)(unaff_RDI + -2) = (char)unaff_RDI[-2] + (char)((ulonglong)param_2 >> 8);
    *(char *)(unaff_RDI + -10) = (char)unaff_RDI[-10] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT44(unaff_0000001c,iVar5) = bVar11;
  cVar8 = (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + cVar8;
  if (*unaff_RSI < '\0') {
    pbVar7 = (byte *)(unaff_RBP + 0xea002df);
    bVar11 = CARRY1(*pbVar7,bVar3);
    *pbVar7 = *pbVar7 + bVar3;
    pbVar7 = (byte *)func_0x000118b7c2c1(param_1,cVar10,0xa8370009);
    bVar2 = *pbVar7;
    bVar3 = *pbVar7 - (byte)pbVar7;
    *pbVar7 = bVar3 - bVar11;
    puVar12 = (undefined8 *)&stack0xfffffffffffffff0;
    cVar10 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar12 = puVar12 + -1;
      *puVar12 = *unaff_RBP;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    uVar6 = (uint)(bVar2 < (byte)pbVar7 || bVar3 < bVar11);
    iVar5 = (0xa84c001a - uRam00000000a84c001a) - uVar6;
    bVar2 = (char)iVar5 -
            (0xa84c001a < uRam00000000a84c001a || 0xa84c001a - uRam00000000a84c001a < uVar6);
    uVar6 = (CONCAT31((int3)(char)((uint)iVar5 >> 8),bVar2) + -0x1e783400) - (uint)(bVar2 < 0x88);
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + (char)auStack_119;
    *(int *)(ulonglong)uVar6 = *(int *)(ulonglong)uVar6 + uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + cVar8;
  param_1 = param_1 + -1;
  if (param_1 != (byte *)0x0 && uVar4 != 0x15f01700) {
    if (uVar4 == 0x15f01700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *param_1 = *param_1 << 1 | uVar4 < 0x15f01700;
  }
  *(char *)unaff_RDI = (char)*unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404ac26c
// Addr: 1404ac26c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ac28e) overlaps instruction at (ram,0x0001404ac28a)
    */

void FUN_1404ac26c(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined **ppuVar9;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  byte in_CF;
  byte bVar10;
  byte in_stack_750016f0;
  undefined1 auStack_148 [257];
  undefined *apuStack_47 [4];
  undefined1 *puStack_20;
  undefined8 uStack_10;
  undefined8 *puVar8;
  
  puStack_20 = &stack0xfffffffffffffff8;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar8 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x02';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  iRam00000000a83b0018 = (iRam00000000a83b0018 + 0x57c4ffe8) - (uint)in_CF;
  uVar5 = 0xa83b0018 - iRam00000000a83b0018;
  if ((int)uVar5 < 0) {
    bVar10 = CARRY1(in_stack_750016f0,(byte)uVar5);
    apuStack_47[1] = &UNK_1404ac2aa;
    pbVar6 = (byte *)func_0x000118b7c2c1();
    bVar3 = *pbVar6;
    bVar1 = *pbVar6 - (byte)pbVar6;
    *pbVar6 = bVar1 - bVar10;
    ppuVar9 = apuStack_47 + 1;
    cVar2 = '\x1c';
    do {
      puVar8 = puVar8 + -1;
      ppuVar9 = ppuVar9 + -1;
      *ppuVar9 = (undefined *)*puVar8;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    uVar5 = (uint)(bVar3 < (byte)pbVar6 || bVar1 < bVar10);
    iVar4 = (0xa84c001a - uRam00000000a84c001a) - uVar5;
    bVar3 = (char)iVar4 -
            (0xa84c001a < uRam00000000a84c001a || 0xa84c001a - uRam00000000a84c001a < uVar5);
    uVar5 = (CONCAT31((int3)(char)((uint)iVar4 >> 8),bVar3) + -0x1e783400) - (uint)(bVar3 < 0x88);
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1 + (char)auStack_148;
    *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (char)(uVar5 >> 8);
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 != (byte *)0x0 && uVar5 != 0x15f01700) {
    if (uVar5 == 0x15f01700) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar6 = *pbVar6 << 1 | uVar5 < 0x15f01700;
  }
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


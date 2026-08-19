// Function: FUN_1404ceef8
// Addr: 1404ceef8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceef8(byte *param_1,undefined2 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  char unaff_BL;
  byte unaff_BH;
  int *unaff_RDI;
  char unaff_R12B;
  char in_AF;
  uint *puVar5;
  char *pcVar6;
  
  *in_RAX = *in_RAX ^ 0x3c;
  *(char *)(unaff_RDI + 0x19000f0c) = (char)unaff_RDI[0x19000f0c] + unaff_BL;
  *param_1 = *param_1 + 0x4b;
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x4b,(char)in_RAX)) + 0xf4050002;
  puVar5 = (uint *)(ulonglong)uVar4;
  *puVar5 = *puVar5 | uVar4;
  uVar2 = (undefined2)(uVar4 >> 0x10);
  bVar3 = (byte)uVar4;
  pcVar6 = (char *)((ulonglong)
                    CONCAT22(uVar2,CONCAT11(((int)*puVar5 < 0) << 7 | (*puVar5 == 0) << 6 |
                                            in_AF << 4 | ((POPCOUNT(*puVar5 & 0xff) & 1U) == 0) << 2
                                            ,bVar3)) | 0x200);
  *(byte *)((longlong)pcVar6 * 2) = *(byte *)((longlong)pcVar6 * 2) ^ unaff_BH;
  out(param_2,bVar3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar6 = *pcVar6 + bVar3;
  *(char *)(unaff_RDI + -0x107ff0f4) = (char)unaff_RDI[-0x107ff0f4] + unaff_BL;
  *(byte *)((longlong)pcVar6 * 2) = *(byte *)((longlong)pcVar6 * 2) ^ unaff_BH;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar6 = *pcVar6 + bVar3;
  pcVar6[-0x60ffc3d0] = pcVar6[-0x60ffc3d0] + bVar3;
  *(byte *)((longlong)pcVar6 * 2) = *(byte *)((longlong)pcVar6 * 2) ^ unaff_BH;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  *unaff_RDI = *unaff_RDI + CONCAT22(uVar2,CONCAT11(0x4b,bVar3)) + (uint)CARRY1(bVar1,bVar3);
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


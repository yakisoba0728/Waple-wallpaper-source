// Function: FUN_1404be0dc
// Addr: 1404be0dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be0dc(byte *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  longlong in_RAX;
  undefined1 *puVar4;
  char cVar6;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  param_1[in_RAX] = param_1[in_RAX] + cVar6;
  uVar3 = (uint)in_RAX & 0x4b059400;
  bVar2 = *param_1;
  bVar5 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  bVar2 = -CARRY1(bVar2,bVar5) - *unaff_RSI;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  *param_2 = *param_2 + unaff_BL;
  pbVar1 = (byte *)(in_FS_OFFSET + (ulonglong)uVar3);
  *pbVar1 = *pbVar1 | bVar2;
  *(int *)(unaff_RDI + uVar3) = *(int *)(unaff_RDI + uVar3) + (int)param_2;
  *unaff_RDI = (char)(uVar3 + 0xc0000634);
  uVar3 = uVar3 + 0xc0000634 & 0x25aad100;
  puVar4 = (undefined1 *)(ulonglong)uVar3;
  param_1[(longlong)(param_2 + 0x21004a)] = param_1[(longlong)(param_2 + 0x21004a)] + cVar6;
  *puVar4 = *puVar4;
  param_2[-0x552effdb] = (byte)param_2[-0x552effdb] >> 5;
  param_1[(longlong)(param_2 + 0x521004a)] = param_1[(longlong)(param_2 + 0x521004a)] + cVar6;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),*puVar4) + 0x40000a74;
  *(uint *)(unaff_RDI + 1) = uVar3;
  puVar4 = (undefined1 *)(ulonglong)(uVar3 & 0x25ab4800);
  puVar4[unaff_RBP + 0x2221004b] = puVar4[unaff_RBP + 0x2221004b] + (char)param_2;
  *puVar4 = *puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


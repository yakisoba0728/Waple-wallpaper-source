// Function: FUN_1404a2c9c
// Addr: 1404a2c9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2c9c(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *in_RAX;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  char unaff_BH;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  
  uVar6 = SUB82(param_2,0);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  uVar3 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar3;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  unaff_RSI[5] = unaff_RSI[5] & bVar5;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  out(*unaff_RSI,uVar6);
  *param_1 = *param_1 + (char)(uVar3 + 0x4a2ba800 >> 8);
  uVar3 = uVar3 + 0x7e30a802;
  iVar1 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3);
  out(*(undefined4 *)(unaff_RSI + 1),uVar6);
  uVar3 = iVar1 + 0x56f6500;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)(uVar3 >> 8);
  iVar2 = *param_2;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
  out(*(undefined4 *)(unaff_RSI + 5),uVar6);
  uVar3 = iVar1 + 0xadeca00;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)(uVar3 >> 8);
  *param_2 = *param_2 +
             CONCAT22((short)((ulonglong)param_1 >> 0x10),
                      CONCAT11(bVar5,(char)param_1 + (char)iVar2 + (char)*param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


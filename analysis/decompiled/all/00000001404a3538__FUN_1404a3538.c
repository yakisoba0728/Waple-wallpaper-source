// Function: FUN_1404a3538
// Addr: 1404a3538
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3538(char *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar4;
  uint *in_RAX;
  char *pcVar3;
  longlong unaff_RBX;
  char unaff_SPL;
  uint *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  longlong unaff_R14;
  longlong in_FS_OFFSET;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar3 = (char *)((ulonglong)uRam40000609c1000609 ^ 0x4a);
  bVar4 = (byte)(uRam40000609c1000609 >> 8);
  *param_1 = *param_1 + bVar4;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar3[-0x5efff9f7] = pcVar3[-0x5efff9f7] + (char)param_2;
  *unaff_RSI = *unaff_RSI | (uint)pcVar3;
  pcVar1 = (char *)(unaff_RBX + (longlong)unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + (char)pcVar3;
  uVar2 = *(undefined4 *)pcVar3;
  *(char *)(in_FS_OFFSET + unaff_R14) = *(char *)(in_FS_OFFSET + unaff_R14) + unaff_SPL;
  *(byte *)unaff_RSI = (char)*unaff_RSI + (bVar4 | (byte)((uint)uVar2 >> 8));
  *param_2 = *param_2 + unaff_EDI;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404d7b44
// Addr: 1404d7b44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7b44(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_R12B;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x88300c1eU);
  pcVar2[0x7a] = pcVar2[0x7a] + (char)param_2;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)(in_EAX + 0x88300c1eU);
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x2fffc9d3);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  uVar1 = in_EAX + 0xde00be8;
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x49ffc9d3] = pcVar2[-0x49ffc9d3] + (char)(uVar1 >> 8);
  uVar1 = in_EAX + 0x87640bb2;
  *param_1 = *param_1 + (char)uVar1;
  *(uint *)((ulonglong)uVar1 * 2) = *(uint *)((ulonglong)uVar1 * 2) | uVar1;
  *param_2 = *param_2 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


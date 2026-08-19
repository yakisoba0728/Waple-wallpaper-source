// Function: FUN_1404cb4c8
// Addr: 1404cb4c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb4c8(char *param_1,longlong param_2,char param_3)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char unaff_BL;
  char unaff_R12B;
  char *pcVar3;
  
  uRam000000013451b4d0 = uRam000000013451b4d0 & in_EAX;
  uVar2 = in_EAX | 0x33e33000;
  pcVar3 = (char *)((longlong)(ulonglong)uVar2 + -0x1d);
  *pcVar3 = *pcVar3 + unaff_BL;
  cVar1 = in(0xb3);
  pcVar3 = (char *)(ulonglong)
                   CONCAT31((uint3)(uVar2 >> 8) ^
                            (uint3)((uint)*(undefined4 *)(ulonglong)uVar2 >> 8),cVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_2 >> 8);
  if (param_1 != (char *)0x0) {
    pcVar3[-0x1d] = pcVar3[-0x1d] + unaff_BL;
    in(0xb3);
    *param_1 = *param_1 + param_3;
    *(char *)(param_2 * 5) = *(char *)(param_2 * 5) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


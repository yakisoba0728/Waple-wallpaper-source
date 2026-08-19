// Function: FUN_1404a946c
// Addr: 1404a946c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a946c(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *in_RAX;
  char *pcVar3;
  longlong unaff_RBX;
  char cVar4;
  int unaff_ESP;
  undefined4 unaff_00000024;
  
  *(int *)(unaff_RBX + -0x5bfefff4) = *(int *)(unaff_RBX + -0x5bfefff4) - unaff_ESP;
  cVar1 = (char)in_RAX;
  cVar4 = (char)unaff_ESP;
  if (-1 < cVar1) {
    *param_1 = *param_1 + cVar4;
    *in_RAX = *in_RAX + cVar1;
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    uRam9378000ca401000c = SUB84(in_RAX,0);
    *param_1 = *param_1 + cVar4;
    *in_RAX = *in_RAX + cVar1;
    *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 != '\0') {
    *in_RAX = *in_RAX + cVar1;
    param_1[unaff_RBX] = param_1[unaff_RBX] + (char)(param_2 >> 8);
    in_RAX[-0x69] = in_RAX[-0x69] + cVar1;
  }
  if ('\0' < cVar1) {
    pcVar2 = (char *)(param_2 & 0xffffffff);
    pcVar3 = (char *)((ulonglong)in_RAX & 0xffffffff);
    *param_1 = *param_1 + cVar4;
    *pcVar2 = *pcVar2 + (char)pcVar2;
    param_1[CONCAT44(unaff_00000024,unaff_ESP) + 0x4a92b000] =
         param_1[CONCAT44(unaff_00000024,unaff_ESP) + 0x4a92b000] | (byte)pcVar3;
    *param_1 = *param_1 + (char)unaff_RBX;
    *pcVar3 = *pcVar3 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


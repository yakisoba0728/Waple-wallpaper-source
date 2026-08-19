// Function: FUN_1404c51bc
// Addr: 1404c51bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c51bc(char *param_1,int *param_2)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  char *pcVar3;
  
  uVar2 = in_EAX + 0xbdc8b300;
  pcVar3 = (char *)(ulonglong)uVar2;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *param_1 = *param_1 + (char)unaff_EBX;
  uVar1 = *(undefined4 *)CONCAT44(unaff_0000001c,unaff_EBX);
  cRam00000001594c7405 = cRam00000001594c7405 + (char)(uVar2 >> 8);
  *param_2 = *param_2 + unaff_EBX;
  *unaff_RSI = *unaff_RSI + ((byte)param_1 ^ (byte)uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


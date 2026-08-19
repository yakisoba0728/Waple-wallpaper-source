// Function: FUN_1404b7de8
// Addr: 1404b7de8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7de8(char *param_1,byte param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  char unaff_SPL;
  char *pcVar3;
  
  *param_4 = *param_4 + unaff_SPL;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar1;
  uVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + param_2) + -0x4b5e0c00) -
          (uint)CARRY1(bVar1,param_2);
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *pcVar3 = *pcVar3 + (char)param_1;
  *pcVar3 = *pcVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


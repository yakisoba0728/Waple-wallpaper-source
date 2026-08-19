// Function: FUN_1404cdc04
// Addr: 1404cdc04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc04(undefined8 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  char unaff_BH;
  longlong unaff_RBP;
  
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  *(char *)(unaff_RBP + -0x24) = *(char *)(unaff_RBP + -0x24) + (char)((ulonglong)in_RAX >> 8);
  uVar2 = (uint)in_RAX ^ 0x35dd1e00;
  pcVar3 = (char *)(ulonglong)
                   CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar2 >> 8) + unaff_BH,cVar1));
  *param_2 = *param_2 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


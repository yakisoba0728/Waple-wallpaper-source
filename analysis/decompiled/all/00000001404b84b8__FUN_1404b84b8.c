// Function: FUN_1404b84b8
// Addr: 1404b84b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b84b8(undefined8 param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar2 = in((short)param_2);
  *param_4 = *param_4 + (char)uVar2;
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  *param_2 = (char)uVar2;
  cRam000000015d4b884d = cRam000000015d4b884d + (char)(uVar2 >> 8);
  pcVar3 = (char *)(ulonglong)(uVar2 + 0x3600470);
  cVar1 = *pcVar3;
  *pcVar3 = *pcVar3 + (char)(uVar2 + 0x3600470);
  *(int *)(unaff_RBP + 0x1b) =
       *(int *)(unaff_RBP + 0x1b) +
       CONCAT22((short)((ulonglong)param_2 >> 0x10),
                CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2));
  *(char *)(unaff_RBP + -8) = *(char *)(unaff_RBP + -8) + (char)param_2;
  func_0x0001189484f7();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404c6cc0
// Addr: 1404c6cc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c6d53) */

void FUN_1404c6cc0(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint *in_RAX;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar4 = (ulonglong)((uint)&stack0x00000000 ^ *(uint *)(param_1 + param_2));
  *(ulonglong *)(uVar4 - 8) = uVar4;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(int *)((longlong)in_RAX + (longlong)param_1) =
       *(int *)((longlong)in_RAX + (longlong)param_1) - unaff_ESI;
  cVar2 = (char)in_RAX;
  cRam00000000d04c78a5 = cRam00000000d04c78a5 + cVar2;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RBX + 0x44002ef3) = *(char *)(unaff_RBX + 0x44002ef3) + cVar3;
  *param_4 = *param_4 + (char)(uVar4 - 8);
  *(char *)in_RAX = (char)*in_RAX + cVar2;
  *(char *)((longlong)in_RAX + -0x5cffd10d) =
       *(char *)((longlong)in_RAX + -0x5cffd10d) + (char)param_2;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404c2e8c
// Addr: 1404c2e8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2e8c(char *param_1,char param_2)

{
  char *pcVar1;
  uint *puVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RSI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  bool in_ZF;
  uint uVar4;
  
  if (!in_ZF) {
    *param_1 = *param_1 + unaff_R12B;
    *unaff_RSI = *unaff_RSI + (char)in_EAX;
    *(char *)CONCAT44(in_register_00000004,in_EAX) =
         *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
    cVar3 = in(10);
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
    *(char *)CONCAT44(in_register_00000004,uVar4) =
         *(char *)CONCAT44(in_register_00000004,uVar4) + cVar3;
    puVar2 = (uint *)(in_FS_OFFSET + CONCAT44(in_register_00000004,uVar4));
    *puVar2 = *puVar2 | uVar4;
    param_1[CONCAT44(in_register_00000004,uVar4)] =
         param_1[CONCAT44(in_register_00000004,uVar4)] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((longlong)unaff_RSI * 2 + 0xe21004a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


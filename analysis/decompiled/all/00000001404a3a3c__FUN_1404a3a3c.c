// Function: FUN_1404a3a3c
// Addr: 1404a3a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a3a45) overlaps instruction at (ram,0x0001404a3a44)
    */

void FUN_1404a3a3c(int *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  char *pcVar3;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  byte in_CF;
  bool in_PF;
  undefined8 unaff_retaddr;
  
  if (!in_PF) {
    *param_1 = *param_1 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       (*(int *)CONCAT44(unaff_00000034,unaff_ESI) - in_EAX) - (uint)in_CF;
  *(char *)param_1 = (char)*param_1 + (char)unaff_EBX;
  *param_1 = *param_1 + unaff_ESI;
  cVar2 = *param_2;
  *param_2 = *param_2 + (char)param_1;
  pcVar3 = (char *)((longlong)param_1 + -1);
  if (pcVar3 == (char *)0x0 || *param_2 == '\0') {
    if (!SCARRY1(cVar2,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)CONCAT44(in_register_00000004,in_EAX) =
         *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)pcVar3;
  }
  pbVar1 = (byte *)(unaff_RDI + CONCAT44(unaff_00000034,unaff_ESI));
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  *(undefined8 *)CONCAT44(unaff_00000034,unaff_ESI) = unaff_retaddr;
  *pcVar3 = *pcVar3 + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


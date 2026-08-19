// Function: FUN_1404a71e0
// Addr: 1404a71e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a71e1) overlaps instruction at (ram,0x0001404a71e0)
    */

void FUN_1404a71e0(char param_1,char *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RDI;
  undefined1 in_OF;
  
  do {
    if (!(bool)in_OF) {
      *(uint *)CONCAT44(in_register_00000004,in_EAX) =
           *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
      uRam21004a6fe40009f1 = in_EAX;
      *(char *)CONCAT44(in_register_00000004,in_EAX) =
           *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
      pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0xf);
      *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
      *(uint *)CONCAT44(in_register_00000004,in_EAX) =
           *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
      uRam01004a6fe40009f1 = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RDI = *unaff_RDI + param_1;
    cVar3 = in(6);
    in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar3);
    in_OF = SCARRY1(*param_2,param_1);
    *param_2 = *param_2 + param_1;
  } while (*param_2 == '\0');
  cRam00000001b04a7615 = cRam00000001b04a7615 + cVar3;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}


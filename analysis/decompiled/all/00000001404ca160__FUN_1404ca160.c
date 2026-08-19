// Function: FUN_1404ca160
// Addr: 1404ca160
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ca10f) */

void FUN_1404ca160(char *param_1,undefined8 param_2,char param_3)

{
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  bool in_OF;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(in_RAX - 0x9ffcd6c) = *(char *)(in_RAX - 0x9ffcd6c) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + param_3;
  *(undefined8 *)((in_RAX & 0xffffffff) - 8) = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


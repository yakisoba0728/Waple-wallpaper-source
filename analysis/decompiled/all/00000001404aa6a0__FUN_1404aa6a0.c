// Function: FUN_1404aa6a0
// Addr: 1404aa6a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa6a0(undefined8 *param_1)

{
  char *in_RAX;
  char in_SF;
  bool in_OF;
  undefined8 in_MM4;
  
  if (in_OF == (bool)in_SF) {
    *(undefined1 *)param_1 = *(undefined1 *)param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pshufw(in_MM4,*param_1,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


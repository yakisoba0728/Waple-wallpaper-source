// Function: FUN_1404c1d54
// Addr: 1404c1d54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1d54(undefined8 param_1,char param_2)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x28004c1c);
  *pcVar1 = *pcVar1 + param_2 + *(char *)(CONCAT44(in_register_00000004,in_EAX) + 0x50);
  *(char *)(ulonglong)(uint)(in_EAX >> 0x1f) =
       *(char *)(ulonglong)(uint)(in_EAX >> 0x1f) + (char)(in_EAX >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


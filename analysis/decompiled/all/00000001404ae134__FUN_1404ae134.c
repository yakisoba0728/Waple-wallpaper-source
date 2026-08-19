// Function: FUN_1404ae134
// Addr: 1404ae134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae134(char *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong in_RAX;
  int unaff_ESI;
  byte in_CF;
  
  puVar1 = (uint *)(param_1 + param_2);
  uVar2 = *puVar1;
  uVar3 = *puVar1 + (uint)param_2;
  *puVar1 = uVar3 + in_CF;
  *(int *)(in_RAX + param_2) =
       *(int *)(in_RAX + param_2) + unaff_ESI +
       (uint)(CARRY4(uVar2,(uint)param_2) || CARRY4(uVar3,(uint)in_CF));
  *param_1 = *param_1 + (char)param_2;
  if (param_1 == (char *)0x1 || *param_1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// Function: FUN_1404a6f78
// Addr: 1404a6f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6f78(char *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint *in_RAX;
  undefined8 uVar2;
  uint *puVar3;
  char unaff_SPL;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam700009dde00009dd);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *param_1 = *param_1 + unaff_SPL;
  puVar3 = (uint *)CONCAT71((uint7)(uint3)((uint)((int)uVar2 + 0x34050002) >> 8),0xde);
  *puVar3 = *puVar3 | (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


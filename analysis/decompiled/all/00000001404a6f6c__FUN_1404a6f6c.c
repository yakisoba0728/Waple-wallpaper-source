// Function: FUN_1404a6f6c
// Addr: 1404a6f6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6f6c(longlong *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 in_RAX;
  char *pcVar3;
  uint *puVar4;
  char unaff_SPL;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  cVar2 = cRam700009dde00009dd;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam700009dde00009dd);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3[-0x1ffff623] = pcVar3[-0x1ffff623] + (char)((ulonglong)in_RAX >> 8);
  *param_1 = (longlong)in_ST0;
  pcVar3[0x6c] = pcVar3[0x6c] + (char)((ushort)param_2 >> 8);
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
  puVar4 = (uint *)CONCAT71((uint7)(uint3)((uint)((int)pcVar3 + 0x34050002) >> 8),0xde);
  *puVar4 = *puVar4 | (uint)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


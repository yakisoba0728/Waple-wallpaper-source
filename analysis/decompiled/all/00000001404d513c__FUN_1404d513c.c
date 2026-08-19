// Function: FUN_1404d513c
// Addr: 1404d513c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d513c(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  undefined2 *puVar3;
  uint unaff_ESP;
  int unaff_ESI;
  char unaff_R12B;
  byte in_CF;
  byte *pbVar2;
  
  uVar1 = in_EAX * 2 + (uint)in_CF;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *(uint *)(pbVar2 + 0x10) =
       *(int *)(pbVar2 + 0x10) + unaff_ESI +
       (uint)(CARRY4(in_EAX,in_EAX) || CARRY4(in_EAX * 2,(uint)in_CF));
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  uVar1 = uVar1 + 0xd4050002;
  puVar3 = (undefined2 *)(ulonglong)uVar1;
  LocalDescriptorTableRegister(*puVar3);
  *(char *)(puVar3 + 0x28) = *(char *)(puVar3 + 0x28) + (char)(uVar1 >> 8);
  *param_4 = *param_4 + unaff_R12B;
  *(uint *)((longlong)puVar3 * 2) = *(uint *)((longlong)puVar3 * 2) & uVar1;
  *(uint *)((longlong)puVar3 + param_2) = *(uint *)((longlong)puVar3 + param_2) & unaff_ESP;
  param_1[param_2] = param_1[param_2] | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


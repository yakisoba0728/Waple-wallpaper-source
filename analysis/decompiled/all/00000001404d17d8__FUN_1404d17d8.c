// Function: FUN_1404d17d8
// Addr: 1404d17d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d17d8(char *param_1,byte *param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int unaff_EBX;
  undefined1 auStack_49f0 [18920];
  uint *puVar3;
  
  uVar2 = in_EAX + 0x50000774;
  puVar3 = (uint *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  if ((char)bVar1 < '\0') {
    *puVar3 = *puVar3 & uVar2;
    *(byte *)puVar3 = (byte)*puVar3 + bVar1;
    register0x00000020 = (BADSPACEBASE *)auStack_49f0;
    if ((char)bVar1 < '\0') {
      *(int *)param_2 = *(int *)param_2 + unaff_EBX;
      *(byte *)puVar3 = (byte)*puVar3 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)puVar3 = (byte)*puVar3 ^ bVar1;
    *param_1 = *param_1 + (char)(uVar2 >> 8);
  }
  *param_2 = *param_2 | bVar1;
  *(byte *)puVar3 = (byte)*puVar3 + (char)param_1;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


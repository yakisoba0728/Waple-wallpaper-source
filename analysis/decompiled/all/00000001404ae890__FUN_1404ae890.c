// Function: FUN_1404ae890
// Addr: 1404ae890
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ae8fe) */

void FUN_1404ae890(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  int *in_RAX;
  char unaff_SPL;
  longlong in_FS_OFFSET;
  
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)in_RAX;
  *param_2 = *param_2 + bVar2;
  *(byte *)in_RAX = (char)*in_RAX + bVar2;
  *(byte *)(in_FS_OFFSET + (longlong)in_RAX) = *(byte *)(in_FS_OFFSET + (longlong)in_RAX) | bVar2;
  pcVar1 = (char *)((ulonglong)(uint)((int)in_RAX + *in_RAX) + 0x210049ed);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


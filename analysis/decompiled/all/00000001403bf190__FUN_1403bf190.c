// Function: FUN_1403bf190
// Addr: 1403bf190
// Size: 9 bytes


void FUN_1403bf190(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = *param_1;
  pcVar2 = "UNSUCCESSFUL";
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    pcVar2 = "successful";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SERIALIZE",uVar1,0,1,0,0xffffffff,"end [%p..%p] serialized %u bytes; %s",uVar1,
                param_1[3],*(int *)(param_1 + 1) - (int)uVar1,pcVar2);
}


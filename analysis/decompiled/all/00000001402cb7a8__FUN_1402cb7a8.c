// Function: FUN_1402cb7a8
// Addr: 1402cb7a8
// Size: 171 bytes


void FUN_1402cb7a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  FILE *_File;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18 [3];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1402cb874();
  uVar2 = FUN_1402c9a6c(2);
  uVar2 = FUN_1400349f0(&local_res20,uVar2);
  cVar1 = FUN_1402cb950(uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1402c9a6c(2);
    FUN_1402cbfcc(uVar2,0,4);
  }
  local_res20 = FUN_1402cb948(0);
  local_18[0] = FUN_1402c9a6c(2);
  ftprintf<>(local_18,&local_res20,&local_res8,&local_res10,local_res18);
  _File = (FILE *)FUN_1402c9a6c(2);
  fflush(_File);
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}


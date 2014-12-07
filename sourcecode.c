if (dir_update_ptr->pdir2)
    {
      if (taken)
	{
	  if (*dir_update_ptr->pdir2 == 2 || *dir_update_ptr->pdir2 == 1 )
	    *dir_update_ptr->pdir2 = 3;
    else if (*dir_update_ptr->pdir2 == 0 )
      *dir_update_ptr->pdir2 = 1;
	}
      else
	{ /* not taken */
	  if (*dir_update_ptr->pdir2 == 2 || *dir_update_ptr->pdir2 == 1 )
      *dir_update_ptr->pdir2 = 0;
    else if (*dir_update_ptr->pdir2 == 3 )
      *dir_update_ptr->pdir2 = 2;
	}
    }

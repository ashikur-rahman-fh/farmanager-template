m t 1 9 9 3 7   r n g _ i n t ( ( u n s i g n e d   i n t )   c h r o n o : : s t e a d y _ c l o c k : : n o w ( ) . t i m e _ s i n c e _ e p o c h ( ) . c o u n t ( ) ) ;  
 m t 1 9 9 3 7 _ 6 4   r n g _ l o n g ( ( u n s i g n e d   l o n g   l o n g )   c h r o n o : : s t e a d y _ c l o c k : : n o w ( ) . t i m e _ s i n c e _ e p o c h ( ) . c o u n t ( ) ) ;  
  
 i n t   n e x t _ i n t ( )   {  
     r e t u r n   r n g _ i n t ( )   %   I N T _ M A X ;  
 }  
 l o n g   l o n g   n e x t _ l o n g ( )   {  
     r e t u r n   r n g _ l o n g ( )   %   L L O N G _ M A X ;      
 }  
 / / / @   R a n d o m   i n t e g e r   i n   r a n g e   [ 0 ,   r )  
 i n t   n e x t _ i n t ( i n t   r )   {  
     r e t u r n   n e x t _ i n t ( )   %   r ;  
 }  
 l o n g   l o n g   n e x t _ l o n g ( l o n g   l o n g   r )   {  
     r e t u r n   n e x t _ l o n g ( )   %   r ;  
 }  
 / / / @   R a n d o m   i n t e g e r   i n   r a n g e   [ l ,   r ]  
 i n t   n e x t _ i n t ( i n t   l ,   i n t   r )   {  
     i f   ( l   >   r )   {  
         s w a p ( l ,   r ) ;  
     }  
     r e t u r n   l   +   n e x t _ i n t ( r   -   l   +   1 ) ;  
 }  
 l o n g   l o n g   n e x t _ l o n g ( l o n g   l o n g   l ,   l o n g   l o n g   r )   {  
     i f   ( l   >   r )   {  
         s w a p ( l ,   r ) ;  
     }  
      
     r e t u r n   l   +   n e x t _ l o n g ( r   -   l   +   1 ) ;    
 }  
 b o o l   n e x t _ b o o l ( )   {  
     r e t u r n   n e x t _ i n t ( )   %   2   ?   t r u e   :   f a l s e ;  
 } 
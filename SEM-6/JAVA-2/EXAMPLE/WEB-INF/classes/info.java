import jakarta.servlet.*;
import jakarta.servlet.http.*;
import java.io.*;



public class info extends HttpServlet
{
    public void service(HttpServletRequest rq,HttpServletResponse rs)throws ServletException,IOException
    {
        rs.setContentType("text/html");
        PrintWriter out=rs.getWriter();
        out.println("<html>");
        out.println("<body>");
        out.println("<h1> The servlet information ...</h1>");



        String ip=rq.getRemoteAddr();
        out.println("<h3> Ip Address  :"+ip+" </h3>");

        String p=rq.getProtocol();
        out.println("<h3> Protocol used  :"+p+" </h3>");

        String n=rq.getRemoteHost();
        out.println("<h3> Name of the host  :"+n+" </h3>");

        String se=rq.getServerName();
        out.println("<h3> Name of server used   :"+se+" </h3>");
     }
     
}
